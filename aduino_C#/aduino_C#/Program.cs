using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO.Ports;
using System.Threading;

namespace aduino_C_
{
	internal class Program
	{
		static SerialPort _serialPort;
		static void Main(string[] args)
		{
			_serialPort = new SerialPort();
			_serialPort.PortName = "COM5";
			_serialPort.BaudRate = 9600;
			_serialPort.Open();
			while (true)
			{
				string a = _serialPort.ReadExisting();
				Console.Write(a);
				Thread.Sleep(200);
			}
		}
	}
}
