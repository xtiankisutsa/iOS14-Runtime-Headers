/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SMBSearch/SMBSearch-Structs.h>
@class wspContext, cNodeRestriction;

@interface wspQueryIn : NSObject {

	SCD_Struct_ws1 msghdr;
	wspContext* _wctx;
	cNodeRestriction* _primaryCnodeRestriction;
	cNodeRestriction* _secondaryCnodeRestriction;

}

@property (retain) wspContext * wctx;                                         //@synthesize wctx=_wctx - In the implementation block
@property (retain) cNodeRestriction * primaryCnodeRestriction;                //@synthesize primaryCnodeRestriction=_primaryCnodeRestriction - In the implementation block
@property (retain) cNodeRestriction * secondaryCnodeRestriction;              //@synthesize secondaryCnodeRestriction=_secondaryCnodeRestriction - In the implementation block
-(wspContext *)wctx;
-(id)initWithCtx:(id)arg1 ;
-(void)setWctx:(wspContext *)arg1 ;
-(id)makePrimaryCnodeRestriction;
-(cNodeRestriction *)primaryCnodeRestriction;
-(id)makeSecondaryCnodeRestriction;
-(int)encodePrimaryQuery:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(int)encodeSecondaryQuery:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(void)setPrimaryCnodeRestriction:(cNodeRestriction *)arg1 ;
-(cNodeRestriction *)secondaryCnodeRestriction;
-(void)setSecondaryCnodeRestriction:(cNodeRestriction *)arg1 ;
@end

