/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CHDataDetectorQueryItem, NSSet, DDScannerResult, UIBezierPath;

@interface PKDataDetectorQueryItem : NSObject {

	CHDataDetectorQueryItem* _coreHandwritingDataDetectorQueryItem;

}

@property (nonatomic,retain) CHDataDetectorQueryItem * coreHandwritingDataDetectorQueryItem;              //@synthesize coreHandwritingDataDetectorQueryItem=_coreHandwritingDataDetectorQueryItem - In the implementation block
@property (nonatomic,readonly) NSSet * strokeIdentifiers; 
@property (nonatomic,readonly) DDScannerResult * scannerResult; 
@property (nonatomic,readonly) UIBezierPath * baselinePath; 
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)strokeIdentifiers;
-(CHDataDetectorQueryItem *)coreHandwritingDataDetectorQueryItem;
-(id)initWithCoreHandwritingDataDetectorQueryItem:(id)arg1 ;
-(DDScannerResult *)scannerResult;
-(UIBezierPath *)baselinePath;
-(void)setCoreHandwritingDataDetectorQueryItem:(CHDataDetectorQueryItem *)arg1 ;
@end
