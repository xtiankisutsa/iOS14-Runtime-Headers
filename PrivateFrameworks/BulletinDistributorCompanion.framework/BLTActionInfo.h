/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSDictionary;

@interface BLTActionInfo : NSObject <BSDescriptionProviding> {

	long long _actionType;
	NSString* _publisherBulletinID;
	NSString* _recordID;
	NSString* _sectionID;
	NSDictionary* _context;

}

@property (assign,nonatomic) long long actionType;                      //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * publisherBulletinID;              //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,copy) NSString * recordID;                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy) NSString * sectionID;                        //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSDictionary * context;                    //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)actionType;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)recordID;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
-(NSString *)sectionID;
-(NSString *)publisherBulletinID;
-(void)setSectionID:(NSString *)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(NSDictionary *)context;
-(id)succinctDescriptionBuilder;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)initWithActionType:(long long)arg1 publisherBulletinID:(id)arg2 recordID:(id)arg3 sectionID:(id)arg4 context:(id)arg5 ;
@end
