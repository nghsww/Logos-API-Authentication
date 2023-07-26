#import "API/APIKey.h"
#Edit BOSONIOS and remove @@
@@BOSON_IOS@@_LDFLAGS += API/libAPIClient.a
#import "API/APIKey.h"

void function(){
    APIClient *API = [[APIClient alloc] init];
    [API setGetRealUDID:YES]; //Get real UDID if you want
    [API setToken:@"TOKEN"]; //Enter token from dashboard
   //paid
    [API paid:^{
        //load menu
        loadview(); //etc
        menuSetup();

        //Optional
    	NSLog(@"APIData - Key: %@", [API getKey]);
        NSLog(@"APIData - UDID: %@", [API getUDID]);
        NSLog(@"APIData - Expiry date: %@", [API getExpiryDate]);
        NSLog(@"APIData - Device model: %@", [API getDeviceModel]);

   }];
}
