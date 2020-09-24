/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceActivityProvider.h>
#import <UIKit/UIActivityItemSource.h>

@class CNContact, NSString;

@interface MKPlaceLocVCardActivityProvider : MKPlaceActivityProvider <UIActivityItemSource> {

	CNContact* _contact;

}

@property (nonatomic,retain) CNContact * contact;                   //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(CNContact *)contact;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2 ;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithMapItem:(id)arg1 contact:(id)arg2 ;
@end
