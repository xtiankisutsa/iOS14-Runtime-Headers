/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BannerKit/BannerKit-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString, NSUUID;

@interface BNBannerSourcePresentableSpecification : NSObject <BSXPCSecureCoding> {

	NSString* _requesterIdentifier;
	NSString* _requestIdentifier;
	NSUUID* _uniqueIdentifier;
	long long _presentableType;
	CGSize _preferredContentSize;
	UIEdgeInsets _contentOutsets;

}

@property (nonatomic,copy) NSString * requesterIdentifier;              //@synthesize requesterIdentifier=_requesterIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestIdentifier;                //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * uniqueIdentifier;                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) long long presentableType;                 //@synthesize presentableType=_presentableType - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize;               //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentOutsets;               //@synthesize contentOutsets=_contentOutsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(NSString *)requestIdentifier;
-(NSString *)requesterIdentifier;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(CGSize)preferredContentSize;
-(NSUUID *)uniqueIdentifier;
-(NSString *)description;
-(long long)presentableType;
-(void)setRequesterIdentifier:(NSString *)arg1 ;
-(void)setPresentableType:(long long)arg1 ;
-(void)setContentOutsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentOutsets;
@end

