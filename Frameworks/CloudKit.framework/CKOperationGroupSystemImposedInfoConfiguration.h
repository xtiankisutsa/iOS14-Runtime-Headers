/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKOperationGroupSystemImposedInfoConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUplink;
	BOOL _allowsCellularAccess;

}

@property (assign,nonatomic) BOOL isUplink;                          //@synthesize isUplink=_isUplink - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;              //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isUplink;
-(void)setIsUplink:(BOOL)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)allowsCellularAccess;
-(unsigned long long)hash;
@end
