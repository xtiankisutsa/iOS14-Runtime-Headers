/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchConnectivity/WCMessageRecord.h>

@interface WCDictionaryMessageRecord : WCMessageRecord {

	/*^block*/id _responseHandler;

}

@property (copy,readonly) id responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)responseHandler;
-(BOOL)expectsResponse;
-(id)description;
-(id)initWithIdentifier:(id)arg1 responseHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
@end

