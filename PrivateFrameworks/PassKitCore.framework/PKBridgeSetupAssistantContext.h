/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FAFamilyMember;

@interface PKBridgeSetupAssistantContext : NSObject {

	FAFamilyMember* _pairingFamilyMember;
	FAFamilyMember* _parentFamilyMember;

}

@property (nonatomic,retain) FAFamilyMember * pairingFamilyMember;              //@synthesize pairingFamilyMember=_pairingFamilyMember - In the implementation block
@property (nonatomic,retain) FAFamilyMember * parentFamilyMember;               //@synthesize parentFamilyMember=_parentFamilyMember - In the implementation block
-(FAFamilyMember *)pairingFamilyMember;
-(void)setPairingFamilyMember:(FAFamilyMember *)arg1 ;
-(FAFamilyMember *)parentFamilyMember;
-(void)setParentFamilyMember:(FAFamilyMember *)arg1 ;
@end
