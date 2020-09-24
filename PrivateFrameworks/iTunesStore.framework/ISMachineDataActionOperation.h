/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSMachineDataRequest, NSString;

@interface ISMachineDataActionOperation : ISOperation {

	BOOL _blocksPurchaseRequests;
	BOOL _hidesServerDrivenDialogs;
	SSMachineDataRequest* _request;
	/*^block*/id _resultBlock;
	NSString* _syncState;
	NSString* _userAgent;

}

@property (readonly) SSMachineDataRequest * machineDataRequest; 
@property (assign) BOOL blocksPurchaseRequests; 
@property (assign) BOOL hidesServerDrivenDialogs; 
@property (copy) id resultBlock; 
@property (copy) NSString * userAgent; 
@property (readonly) NSString * syncState; 
-(NSString *)syncState;
-(id)uniqueKey;
-(void)setResultBlock:(id)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)run;
-(id)resultBlock;
-(BOOL)_shouldRetryAfterError:(id)arg1 ;
-(id)initWithMachineDataRequest:(id)arg1 ;
-(BOOL)_provisionWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_syncMachineWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_eraseProvisioning;
-(BOOL)blocksPurchaseRequests;
-(BOOL)hidesServerDrivenDialogs;
-(void)setHidesServerDrivenDialogs:(BOOL)arg1 ;
-(SSMachineDataRequest *)machineDataRequest;
-(void)setBlocksPurchaseRequests:(BOOL)arg1 ;
@end
