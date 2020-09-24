/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFNaming.h>

@class EMDaemonInterface, NSString, WFEmailAddress, NSArray, NSData;

@interface WFEmail : NSObject <NSCopying, NSSecureCoding, WFNaming> {

	EMDaemonInterface* _interface;
	NSString* _subject;
	unsigned long long _subjectPrefix;
	WFEmailAddress* _sender;
	NSArray* _recipients;
	NSData* _identifier;
	NSString* _accountIdentifier;

}

@property (nonatomic,readonly) EMDaemonInterface * interface;                  //@synthesize interface=_interface - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * subject;                        //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) unsigned long long subjectPrefix;               //@synthesize subjectPrefix=_subjectPrefix - In the implementation block
@property (nonatomic,readonly) WFEmailAddress * sender;                        //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipients;                      //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) NSData * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
-(NSArray *)recipients;
-(NSData *)identifier;
-(WFEmailAddress *)sender;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subject;
-(EMDaemonInterface *)interface;
-(NSString *)wfName;
-(NSString *)accountIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 accountIdentifier:(id)arg2 subject:(id)arg3 sender:(id)arg4 recipients:(id)arg5 ;
-(void)fetchAttachmentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchContentRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)subjectPrefix;
@end
