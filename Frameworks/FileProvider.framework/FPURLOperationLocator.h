/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperationLocator.h>

@interface FPURLOperationLocator : FPActionOperationLocator {

	BOOL _attachSandboxExtensionOnXPCEncoding;
	long long _size;

}
+(BOOL)supportsSecureCoding;
-(id)identifier;
-(id)parentIdentifier;
-(BOOL)isDownloaded;
-(id)initWithObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isFolder;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)size;
-(id)filename;
-(BOOL)isExternalURL;
-(id)description;
-(void)attachSandboxExtensionOnXPCEncoding;
-(BOOL)requiresCrossDeviceCopy;
@end

