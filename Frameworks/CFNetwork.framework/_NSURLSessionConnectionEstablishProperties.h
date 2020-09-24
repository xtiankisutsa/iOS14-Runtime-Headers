/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_ConnectionMetrics, NSString, NSNumber;

@interface _NSURLSessionConnectionEstablishProperties : NSObject <NSSecureCoding> {

	__CFN_ConnectionMetrics* __metrics;

}

@property (nonatomic,readonly) NSObject*<OS_nw_endpoint> localEndpoint; 
@property (nonatomic,readonly) NSObject*<OS_nw_endpoint> remoteEndpoint; 
@property (nonatomic,copy,readonly) NSString * interfaceName; 
@property (getter=isCellular,nonatomic,readonly) BOOL cellular; 
@property (getter=isExpensive,nonatomic,readonly) BOOL expensive; 
@property (getter=isConstrained,nonatomic,readonly) BOOL constrained; 
@property (getter=isMultipath,nonatomic,readonly) BOOL multipath; 
@property (nonatomic,readonly) BOOL usedTFO; 
@property (nonatomic,copy,readonly) NSString * networkProtocolName; 
@property (nonatomic,copy,readonly) NSNumber * negotiatedTLSProtocolVersion; 
@property (nonatomic,copy,readonly) NSNumber * negotiatedTLSCipherSuite; 
@property (nonatomic,retain,readonly) NSObject*<OS_nw_establishment_report> establishmentReport; 
+(BOOL)supportsSecureCoding;
-(NSObject*<OS_nw_endpoint>)remoteEndpoint;
-(BOOL)isMultipath;
-(BOOL)usedTFO;
-(BOOL)isExpensive;
-(NSObject*<OS_nw_endpoint>)localEndpoint;
-(NSNumber *)negotiatedTLSProtocolVersion;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isConstrained;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)interfaceName;
-(NSObject*<OS_nw_establishment_report>)establishmentReport;
-(NSString *)networkProtocolName;
-(NSNumber *)negotiatedTLSCipherSuite;
-(BOOL)isCellular;
@end
