/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNMeCardSharingNameProvider.h>

@class NSString;

@interface CKSettingsMeCardSharingNameProvider : NSObject <CNMeCardSharingNameProvider> {

	NSString* _givenName;
	NSString* _middleName;
	NSString* _familyName;
	NSString* _nickname;

}

@property (nonatomic,retain) NSString * givenName;                  //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,retain) NSString * middleName;                 //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,retain) NSString * familyName;                 //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,retain) NSString * nickname;                   //@synthesize nickname=_nickname - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nameProviderForNickname:(id)arg1 ;
-(NSString *)givenName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)nickname;
-(NSString *)familyName;
-(void)setNickname:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
@end

