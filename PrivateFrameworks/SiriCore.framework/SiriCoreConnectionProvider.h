/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriCoreConnectionProvider <NSObject>
@required
+(void)getMetricsContext:(/*^block*/id)arg1;
-(void)close;
-(BOOL)isReady;
-(id)initWithQueue:(id)arg1;
-(BOOL)isMultipath;
-(void)readData:(/*^block*/id)arg1;
-(id)connectionType;
-(void)setDelegate:(id)arg1;
-(void)writeData:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)isCanceled;
-(id)analysisInfo;
-(BOOL)hasActiveConnection;
-(BOOL)supportsInitialPayload;
-(void)openConnectionForURL:(id)arg1 withConnectionId:(id)arg2 initialPayload:(id)arg3 completion:(/*^block*/id)arg4;
-(id)headerDataWithForceReconnect:(BOOL)arg1;
-(BOOL)shouldFallbackQuickly;
-(void)updateConnectionMetrics:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)isPeerConnectionError:(id)arg1;
-(BOOL)isPeerNotNearbyError:(id)arg1;
-(BOOL)shouldFallbackFromError:(id)arg1;
-(id)resolvedHost;
-(void)setProviderConnectionPolicy:(id)arg1;
-(void)setPolicyRoute:(id)arg1;
-(void)setPrefersWWAN:(BOOL)arg1;
-(void)setConnectByPOPMethod:(BOOL)arg1;
-(void)setEnforceExtendedValidation:(BOOL)arg1;
-(void)setScopeIsWiFiOnly;
-(void)setKeepAlive:(double)arg1 withInterval:(double)arg2 withCount:(unsigned long long)arg3;
-(void)setRetransmitConnectionDropTime:(double)arg1;
-(void)setStaleInterval:(double)arg1;
-(BOOL)providerStatsIndicatePoorLinkQuality;
-(BOOL)isEstablishing;

@end

