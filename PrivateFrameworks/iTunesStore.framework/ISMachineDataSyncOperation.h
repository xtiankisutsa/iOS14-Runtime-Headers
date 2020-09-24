/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSData, NSString;

@interface ISMachineDataSyncOperation : ISOperation {

	unsigned long long _accountID;
	BOOL _allowsBootstrapCellularData;
	BOOL _hidesServerDrivenDialogs;
	NSData* _inputData;
	long long _protocolVersion;
	NSString* _syncState;
	NSString* _userAgent;

}

@property (assign) BOOL allowsBootstrapCellularData; 
@property (assign) BOOL hidesServerDrivenDialogs; 
@property (assign) long long protocolVersion; 
@property (copy) NSString * userAgent; 
@property (readonly) NSString * syncState; 
-(long long)protocolVersion;
-(NSString *)syncState;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setProtocolVersion:(long long)arg1 ;
-(void)run;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(BOOL)allowsBootstrapCellularData;
-(BOOL)hidesServerDrivenDialogs;
-(void)setHidesServerDrivenDialogs:(BOOL)arg1 ;
-(id)initWithAccountIdentifier:(unsigned long long)arg1 syncData:(id)arg2 ;
-(id)_newSyncOperationWithClientData:(id)arg1 machineIDData:(id)arg2 ;
@end
