/***********************************/
/*				   */
/* Code by: Khromov Egor Pavlovich */
/* github.com/SochnoeAnime/LABScpp */
/*		10.2021		   */
/*				   */
/***********************************/
#include <iostream>
#include <string>

using namespace std;

int main() {

    string curr;

    cout << "The program invites you to learn a little more about the 6 major currencies of the world.\nShown here are:\nDollar (USD),\nEuro (EUR),\nPound Sterling (GBP),\nJapanese Yen (JPY),\nSwiss Franc (CHF),\nAustralian Dollar (AUD).\nJust write a currency quote to find out more." << endl;

    while (true)
    {           
        cin >> curr;
    
        if (curr == "USD") {
            cout << "US dollar - USD, symbolized by the $ sign, is the national currency of the United States and is also used as a means of payment in more than twenty countries around the world.\n\nOne dollar equals 100 cents.\n\nFor over 50 years it has been the reserve currency of many national banks,\nimmediately after the Second World War, he gradually ousted the British pound from circulation, this happened due to the fact that Great Britain at that time was significantly weakened after the war, which could not but affect its economy.\n";
        }
        else if (curr == "EUR")
        {
            cout << "Euro - €, or EUR is a collective currency for a number of European countries, there are 17 of them - Estonia, Austria, France, Belgium, Finland, Germany, Slovenia, Greece, Slovakia, Ireland, Portugal, Spain, Netherlands, Italy, Malta, Cyprus, Luxembourg.\n\nOne euro is divided into 100 eurocents.\n\nThe introduction of the single European currency took place on January 1, 1999 for non-cash payments, and from January 1, 2002, as a cash means of payment, a complete transition to the euro took place from June 1, 2002.\n";
        }
        else if (curr == "GBP")
        {
            cout << "Pound Sterling - £, or GBP, the national currency of Great Britain, is currently recognized as one of the most stable world currencies. According to the latest data, the share of the pound in the gold and foreign exchange reserves of other countries is more than 5%.\n\nOne pound equals 10 pence.\n\nThe pound sterling has the highest value compared to other currencies in the world in terms of trading volume on Forex, it is the fourth most popular currency after the dollar, euro and yen.\n";
        }
        else if (curr == "JPY")
        {
            cout << "Japanese Yen - ¥ or JPY is the national currency of Japan, widely used as a means of payment in Asia, and is the most popular currency in the region. Settlements in Yen are significantly inferior to euros and dollars and are mainly used as a means of payment for Japanese goods.\n\nShe yen has no smaller denomination, for 100 yen on average they give about 0.8 US dollars. Its exchange rate is rather unstable, so this currency is rarely used as a reserve currency.\n\nThe yen is the third most popular currency when trading on the forex market, the reason for this is the presence of the Asian trading session, in which most transactions are made in the yen.\n";
        }
        else if (curr == "CHF")
        {
            cout << "Swiss franc - denoted as CHF in currency quotes, it is the national currency and the main payment unit in Switzerland. It gained its popularity thanks to the stability of the Swiss banking system and the high provision of gold and foreign exchange reserves.\n\nOne Swiss franc equals 100 centimes.\n\nFor many years, this currency has been considered the standard of stability, this is happening for two reasons - a high credit rating and the provision of paper notes with gold and foreign exchange reserves in the amount of at least 40 percent of their value.\n";
        }
        else if (curr == "AUD")
        {
            cout << "Australian dollar - in the quotes appears as AUD, the national currency of Australia. Although it is inferior in popularity to the above-named currencies, it is still included in the seven major world currencies. Its popularity is facilitated by trading on the Sydney Currency Exchange, where this currency is very popular.\n\nOne Australian dollar is equal to 100 cents.\n";
        }
    }

    system("payse");
    return 0;
}