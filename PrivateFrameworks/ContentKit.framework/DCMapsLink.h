/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/WFSerializableContent.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString;

@interface DCMapsLink : NSObject <WFSerializableContent, WFNaming>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (nonatomic,readonly) NSString * mkDirectionsMode; 
@property (nonatomic,readonly) BOOL canGetDirections; 
@property (nonatomic,readonly) unsigned long long directionsTransportType; 
@property (nonatomic,readonly) CLLocationCoordinate2D centerCoordinate; 
@property (nonatomic,readonly) unsigned long long mkMapType; 
@property (nonatomic,readonly) NSString * searchQuery; 
@property (nonatomic,readonly) NSString * searchNearQuery; 
@property (nonatomic,readonly) NSString * searchLocation; 
@property (nonatomic,readonly) NSString * startAddress; 
@property (nonatomic,readonly) NSString * destinationAddress; 
@property (nonatomic,readonly) unsigned long long directionsMode; 
@property (nonatomic,readonly) NSString * centerLocation; 
@property (nonatomic,readonly) long long zoomLevel; 
@property (nonatomic,readonly) unsigned long long mapType; 
@property (nonatomic,readonly) BOOL showsTraffic; 
@property (nonatomic,readonly) BOOL showsTransit; 
@property (nonatomic,readonly) BOOL showsStreetView; 
@property (nonatomic,readonly) BOOL showsBicycling; 
@property (nonatomic,readonly) NSString * streetViewLocation; 
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(void)processLocation:(id)arg1 shiftingIfNecessary:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)createMapsLinkWithPlacemark:(id)arg1 location:(id)arg2 streetAddress:(id)arg3 shiftingLocationIfNecessary:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
+(BOOL)isMapsURL:(id)arg1 ;
+(id)mapsLinkWithURL:(id)arg1 ;
+(CGPoint)coordinateSpanForMapSize:(CGSize)arg1 centeredAtLocation:(CLLocationCoordinate2D)arg2 atZoomLevel:(long long)arg3 ;
+(double)longitudeToPixelSpaceX:(double)arg1 ;
+(double)latitudeToPixelSpaceY:(double)arg1 ;
+(double)pixelSpaceXToLongitude:(double)arg1 ;
+(double)pixelSpaceYToLatitude:(double)arg1 ;
+(SCD_Struct_DC20)coordinateRegionForMapSize:(CGSize)arg1 centeredAtLocation:(CLLocationCoordinate2D)arg2 atZoomLevel:(long long)arg3 ;
-(CLLocationCoordinate2D)centerCoordinate;
-(NSString *)searchQuery;
-(unsigned long long)mapType;
-(id)region;
-(NSString *)destinationAddress;
-(long long)zoomLevel;
-(NSString *)wfName;
-(unsigned long long)directionsMode;
-(NSString *)startAddress;
-(NSString *)searchLocation;
-(BOOL)showsTraffic;
-(NSString *)description;
-(id)wfSerializedRepresentation;
-(void)geocodeAddressString:(id)arg1 inRegionIfAvailable:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)geocodeDirectionsEndpointsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)regionCenteredAtLocation:(CLLocationCoordinate2D)arg1 ;
-(unsigned long long)directionsTransportType;
-(NSString *)mkDirectionsMode;
-(void)getDirectionsToPlacemark:(id)arg1 fromPlacemark:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)canGetDirections;
-(void)getDirectionsToPlacemark:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getDirectionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getAppleMapsDirectionsURL:(/*^block*/id)arg1 ;
-(NSString *)searchNearQuery;
-(NSString *)centerLocation;
-(BOOL)showsTransit;
-(BOOL)showsStreetView;
-(BOOL)showsBicycling;
-(NSString *)streetViewLocation;
-(id)mapsAppURL;
-(id)googleMapsAppURL;
-(id)transitAppURL;
-(id)wazeAppURL;
-(id)baiduMapsAppURL;
-(void)getCitymapperAppURL:(/*^block*/id)arg1 ;
-(CLLocationCoordinate2D)streetViewLocationCoordinate;
-(CLLocationCoordinate2D)centerLocationCoordinate;
-(CLLocationCoordinate2D)searchLocationCoordinate;
-(CGPoint)coordinateSpanForMapSize:(CGSize)arg1 centeredAtLocation:(CLLocationCoordinate2D)arg2 ;
-(unsigned long long)mkMapType;
-(SCD_Struct_DC20)coordinateRegionForMapSize:(CGSize)arg1 centeredAtLocation:(CLLocationCoordinate2D)arg2 ;
-(CLLocationCoordinate2D)locationCoordinateFromString:(id)arg1 ;
@end

