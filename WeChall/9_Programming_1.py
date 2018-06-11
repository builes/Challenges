import requests;

url_message = 'http://www.wechall.net/challenge/training/programming1/index.php?action=request';
cookie  	  = {'WC': '10420561-22898-3SO7ObNdoApqZGmj'};
r 			    = requests.get(url_message,cookies=cookie);
o           = r.text;
url_destine = 'http://www.wechall.net/challenge/training/programming1/index.php?answer='+o;
d  			    = requests.get(url_destine,cookies=cookie);
print 		d.text;
