

int button_pin[8] =
    {35, 34, 39, 23, 26, 27, 14, 4};

// int button_staus[8] = {0};

void setup()
{
    Serial.begin(115200);

    for (int i = 0; i < 8; i++)
        pinMode(button_pin[i], INPUT);
}

void loop()
{
    String str = "";
    for (int i = 0; i < 8; i++)
    {
        // button_staus[i] = digitalRead(button_pin[i]);
        int temp = digitalRead(button_pin[i]);

        if (temp == 1)
        {
            str = str + "    " + (i + 1);
        }
        else
        {
            str = str + "    X";
        }
    }

    Serial.println(str);

    delay(1000);
}