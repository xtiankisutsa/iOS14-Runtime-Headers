/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKDiagnostics : NSObject
+(id)_secureElementData;
+(void)_createDiagnosticJsonWithDictionary:(id)arg1 hasLibrary:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(id)_metadataForCardAtURL:(id)arg1 ;
+(id)_allPasses;
+(void)generateDiagnosticsPackageWithPassLibrary:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
+(void)generateZippedDiagnosticsPackageWithPassLibrary:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
+(id)generateUbiquityDiagnosticsFile:(BOOL)arg1 ;
+(void)saveTransitState:(id)arg1 forPaymentApplication:(id)arg2 ;
@end
