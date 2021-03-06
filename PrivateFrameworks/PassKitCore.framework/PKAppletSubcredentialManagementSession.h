/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDASession.h>

@class DAKeyManagementSession;

@interface PKAppletSubcredentialManagementSession : PKDASession

@property (nonatomic,retain) DAKeyManagementSession * session; 
+(id)createSessionWithDelegate:(id)arg1 ;
-(id)trackSubcredential:(id)arg1 withReceipt:(id)arg2 ;
-(void)rescindInvitations:(id)arg1 onCredential:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)listSharingInvitationsForKeyIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)listReceivedSharingInvitationsWithCompletion:(/*^block*/id)arg1 ;
-(void)listCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(void)revokeCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)decryptData:(id)arg1 withCredential:(id)arg2 ephemeralPublicKey:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeSharedCredentialsWithIdentifiers:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)immobilizerTokensCountForCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)signData:(id)arg1 auth:(id)arg2 bundleIdentifier:(id)arg3 nonce:(id)arg4 credential:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)revokeSharedCredentials:(id)arg1 onCredential:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

