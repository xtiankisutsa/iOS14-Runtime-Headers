/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContact, NSString;

@interface CNUIFamilyMemberDowntimeContactItem : NSObject {

	BOOL _selected;
	CNContact* _contact;
	NSString* _label;

}

@property (nonatomic,readonly) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * label;                 //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL selected;                      //@synthesize selected=_selected - In the implementation block
-(CNContact *)contact;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithContact:(id)arg1 label:(id)arg2 ;
-(NSString *)label;
-(BOOL)selected;
@end

