/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ContactsAutocompleteUI/CNComposeRecipient.h>
#import <libobjc.A.dylib/CKIMComposeRecipient.h>

@protocol CKIMComposeRecipient <NSObject>
@required
-(void)releaseIMReferences;

@end


@class IMHandle, NSString;

@interface CKIMComposeRecipient : CNComposeRecipient <CKIMComposeRecipient> {

	IMHandle* _handle;

}

@property (nonatomic,readonly) IMHandle * handle;                   //@synthesize handle=_handle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(IMHandle *)handle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithHandle:(id)arg1 ;
-(void)setIdentifier:(int)arg1 ;
-(id)address;
-(id)unlocalizedLabel;
-(id)supportedDragTypes;
-(id)objectForDragType:(id)arg1 ;
-(id)displayString;
-(BOOL)isEqual:(id)arg1 ;
-(id)commentedAddress;
-(id)compositeName;
-(id)uncommentedAddress;
-(BOOL)isRemovableFromSearchResults;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(void)releaseIMReferences;
@end

