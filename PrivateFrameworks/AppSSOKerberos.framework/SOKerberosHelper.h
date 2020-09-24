/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSSOKerberos/AppSSOKerberos-Structs.h>
@interface SOKerberosHelper : NSObject
+(gss_cred_id_t_desc_structRef)acquireCredentialForUUID:(id)arg1 ;
+(BOOL)authenticate:(gss_cred_id_t_desc_structRef)arg1 toServer:(id)arg2 returningToken:(id*)arg3 andError:(id*)arg4 ;
+(gss_cred_id_t_desc_structRef)createCredential:(id)arg1 withOptions:(id)arg2 andError:(id*)arg3 ;
+(gss_cred_id_t_desc_structRef)acquireCredentialForUPN:(id)arg1 ;
+(BOOL)changePasswordForUPN:(id)arg1 withOldPassword:(id)arg2 withNewPassword:(id)arg3 withError:(id*)arg4 ;
+(unsigned)createGSSName:(id)arg1 gname:(gss_name_t_desc_struct*)arg2 error:(id*)arg3 ;
+(BOOL)_testForUPNForUser:(id)arg1 ;
+(BOOL)validatePassword:(id)arg1 forUser:(id)arg2 ;
+(void)destroyAllCredentials;
+(void)destroyCredential:(id)arg1 ;
+(void)destroyCredentialForUPN:(id)arg1 ;
+(id)listCredentials;
@end
