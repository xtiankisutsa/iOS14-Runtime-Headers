/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDAppContainerTuple, NSString;

@interface CKDAppContainerAccountTuple : NSObject <NSCopying> {

	CKDAppContainerTuple* _appContainerTuple;
	NSString* _accountID;

}

@property (nonatomic,retain) CKDAppContainerTuple * appContainerTuple;              //@synthesize appContainerTuple=_appContainerTuple - In the implementation block
@property (nonatomic,copy) NSString * accountID;                                    //@synthesize accountID=_accountID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)CKPropertiesDescription;
-(void)setAccountID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)accountID;
-(id)initWithAppContainerTuple:(id)arg1 accountID:(id)arg2 ;
-(unsigned long long)hash;
-(void)setAppContainerTuple:(CKDAppContainerTuple *)arg1 ;
-(id)description;
-(CKDAppContainerTuple *)appContainerTuple;
@end
