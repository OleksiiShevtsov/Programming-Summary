using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
//Для работы с файлами
using System.IO;
//Для работы с текстами (кодировками...)
using System.Text;

namespace TextEditor.BL{

    public interface IFileManager
    {
        string GetContent(string filePath);
        string GetContent(string filePath, Encoding encoding);
        void SaveContent(string content, string filePath);
        void SaveContent(string content, string filePath, Encoding encoding);
        bool IsExist(string filePath);
        int GetSymbolCount(string content);
    }

        public class FileManager : IFileManager{
        private readonly Encoding _defaultEncoding = Encoding.GetEncoding(1251);
        
        //в случае стандартной кодировки
        public string GetContent(string filePath)
        {
            return GetContent(filePath, _defaultEncoding);
        }
        //(путь к файлу, кодировка файла)
        public string GetContent(string filePath, Encoding encoding){
            //статический класс File.
            //ReadAllText - возвращяет содержание
            string content = File.ReadAllText(filePath, encoding);
            return content;
        }

        //SaveContent - сохранение содержимого в файле
        public void SaveContent(string content, string filePath){
            SaveContent(content, filePath, _defaultEncoding);
        }
        public void SaveContent(string content, string filePath, Encoding encoding){
            File.WriteAllText(filePath, content, encoding);
        }

        //проверка на существование файла
        public bool IsExist(string filePath){
            bool isExist = File.Exists(filePath);
            return isExist;
        }

        //количество символов
        public int GetSymbolCount(string content){
            return content.Length;
        }
    }
}
