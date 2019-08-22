///  Lights switch DAY/NITE prototype
// USES SUMMER TIME UTC+2

#include <DS3231.h>
#include <Wire.h>
Time t;

DS3231 rtc(A4, A5); 
int relay = 4;
String month;
String timeStr;
float timeFloat;
 
void setup() 
{
    pinMode(relay, OUTPUT);
    digitalWrite(relay, HIGH);  //relay off on HIGH
    Serial.begin(9600);
    rtc.begin();
  
    //rtc.setDOW(SATURDAY);     // Set Day-of-Week to SUNDAY
    //rtc.setTime(21, 58, 00);     // Set the time to 12:00:00 (24hr format)
    //rtc.setDate(22, 12, 2018);   // Set the date to January 1st, 2014 
}
 
void loop()
{

  //Get time from RTC
  month =  rtc.getMonthStr(FORMAT_SHORT);
  timeStr =  rtc.getTimeStr(FORMAT_SHORT);
  timeStr.replace(':', '.');
  timeFloat = timeStr.toFloat();

  Serial.println(rtc.getTimeStr());
  int helper = 0;
  // < >

  
  
  if (month == "Jan")
  {
    Serial.println(month);
    if (timeFloat < 10.31)
    {
      helper = helper + 1;
    }

    if (timeFloat > 15.46)
    {
      helper = helper + 1;
    }
    
  }


  if (month == "Feb")
  {
    Serial.println(month);
    if (timeFloat < 9.31)
    {
      helper = helper + 1;
    }

    if (timeFloat > 17.27)
    {
      helper = helper + 1;
    }
    
  }


  if (month == "Mar")
  {
    Serial.println(month);
    if (timeFloat < 8.21)
    {
      helper = helper + 1;
    }

    if (timeFloat > 18.37)
    {
      helper = helper + 1;
    }
    
  }


  if (month == "Apr")
  {
    Serial.println(month);
    if (timeFloat < 6.51)
    {
      helper = helper + 1;
    }

    if (timeFloat > 19.48)
    {
      helper = helper + 1;
    }
    
  }


  if (month == "May")
  {
    Serial.println(month);
    if (timeFloat < 5.26)
    {
      helper = helper + 1;
    }

    if (timeFloat > 20.56)
    {
      helper = helper + 1;
    }
    
  }


  if (month == "Jun")
  {
    Serial.println(month);
    if (timeFloat < 4.27)
    {
      helper = helper + 1;
    }

    if (timeFloat > 21.51)
    {
      helper = helper + 1;
    }
    
  }


  if (month == "Jul")
  {
    Serial.println(month);
    if (timeFloat < 5.16)
    {
      helper = helper + 1;
    }

    if (timeFloat > 21.26)
    {
      helper = helper + 1;
    }
    
  }

  
  if (month == "Aug")
  {
    Serial.println(month);
    if (timeFloat < 6.31)
    {
      helper = helper + 1;
    }

    if (timeFloat > 20.01)
    {
      helper = helper + 1;
    }
    
  }


  if (month == "Sep")
  {
    Serial.println(month);
    if (timeFloat < 7.31)
    {
      helper = helper + 1;
    }

    if (timeFloat > 18.36)
    {
      helper = helper + 1;
    }
    
  }


  if (month == "Oct")
  {
    Serial.println(month);
    if (timeFloat < 8.36)
    {
      helper = helper + 1;
    }

    if (timeFloat > 17.11)
    {
      helper = helper + 1;
    }
    
  }


  if (month == "Nov")
  {
    Serial.println(month);
    if (timeFloat < 9.51)
    {
      helper = helper + 1;
    }

    if (timeFloat > 16.01)
    {
      helper = helper + 1;
    }
    
  }

  
  if (month == "Dec")
  {
    Serial.println(month);
    if (timeFloat < 10.31)
    {
      helper = helper + 1;
    }

    if (timeFloat > 15.41)
    {
      helper = helper + 1;
    }
    
  }


  if (helper == 1)
  {
    Serial.println("light on");
    digitalWrite(relay, HIGH);
    
  }
  else
  {
    Serial.println("light off");
    digitalWrite(relay, LOW);
  }

  Serial.println("-----------------------");
  // Wait 2 minutes (120000 millisec) before repeating :)
  delay (120000);
}
