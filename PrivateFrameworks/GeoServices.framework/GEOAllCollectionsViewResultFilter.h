/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDAllCollectionsViewResultFilter, NSArray, GEOAllCollectionsViewResultFilterTypeAddress, GEOAllCollectionsViewResultFilterTypeKeyword;

@interface GEOAllCollectionsViewResultFilter : NSObject {

	GEOPDAllCollectionsViewResultFilter* _resultFilter;
	NSArray* _places;

}

@property (nonatomic,readonly) long long filterType; 
@property (nonatomic,readonly) GEOAllCollectionsViewResultFilterTypeAddress * addressFilter; 
@property (nonatomic,readonly) GEOAllCollectionsViewResultFilterTypeKeyword * keywordFilter; 
-(GEOAllCollectionsViewResultFilterTypeKeyword *)keywordFilter;
-(id)initWithAllCollectionsViewResultFilter:(id)arg1 withPlaces:(id)arg2 ;
-(long long)filterType;
-(GEOAllCollectionsViewResultFilterTypeAddress *)addressFilter;
@end
