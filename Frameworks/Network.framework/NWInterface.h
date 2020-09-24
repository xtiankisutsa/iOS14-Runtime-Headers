/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_nw_interface;
@class NSObject, NSString;

@interface NWInterface : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying> {

	NSObject*<OS_nw_interface> _internalInterface;

}

@property (nonatomic,readonly) BOOL supportsMulticast; 
@property (nonatomic,readonly) BOOL hasDNS; 
@property (nonatomic,readonly) BOOL hasNAT64; 
@property (getter=isIPv4Routable,nonatomic,readonly) BOOL ipv4Routable; 
@property (getter=isIPv6Routable,nonatomic,readonly) BOOL ipv6Routable; 
@property (retain) NSObject*<OS_nw_interface> internalInterface;                     //@synthesize internalInterface=_internalInterface - In the implementation block
@property (nonatomic,readonly) unsigned long long generation; 
@property (nonatomic,readonly) long long mtu; 
@property (nonatomic,readonly) NWInterface * delegateInterface; 
@property (nonatomic,readonly) NSString * typeString; 
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (nonatomic,readonly) NSString * interfaceName; 
@property (nonatomic,readonly) unsigned long long interfaceIndex; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long subtype; 
@property (getter=isExpensive,nonatomic,readonly) BOOL expensive; 
@property (getter=isConstrained,nonatomic,readonly) BOOL constrained; 
+(BOOL)supportsSecureCoding;
+(id)interfaceWithProtocolBufferData:(id)arg1 ;
+(id)descriptionForSubtype:(long long)arg1 ;
+(id)descriptionForType:(long long)arg1 ;
-(long long)mtu;
-(unsigned long long)interfaceIndex;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)privateDescription;
-(long long)subtype;
-(void)setInternalInterface:(NSObject*<OS_nw_interface>)arg1 ;
-(NSString *)typeString;
-(BOOL)hasNAT64;
-(id)createProtocolBufferObject;
-(BOOL)isExpensive;
-(id)initWithInterfaceIndex:(unsigned long long)arg1 interfaceName:(id)arg2 ;
-(NWInterface *)delegateInterface;
-(unsigned long long)generation;
-(BOOL)isIPv6Routable;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInterface:(id)arg1 ;
-(id)ipv4Broadcast;
-(id)initWithInterfaceName:(id)arg1 ;
-(BOOL)isConstrained;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)interfaceName;
-(BOOL)isIPv4Routable;
-(id)initWithInterfaceIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)isShallowEqual:(id)arg1 ;
-(id)copyLocalAddressForRemoteAddress:(id)arg1 ;
-(NSObject*<OS_nw_interface>)internalInterface;
-(id)ipv4Netmask;
-(BOOL)hasDNS;
-(id)copyLocalAddressForDefaultIPv6;
-(id)copyLocalAddressForDefaultIPv4;
-(id)description;
-(BOOL)isDeepEqual:(id)arg1 ;
-(BOOL)supportsMulticast;
@end
