/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebSelectedItemPrivate.h>

@class DOMHTMLOptGroupElement;

@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate> {

	DOMHTMLOptGroupElement* _node;

}

@property (nonatomic,retain) DOMHTMLOptGroupElement * _node;              //@synthesize node=_node - In the implementation block
-(DOMHTMLOptGroupElement *)_node;
-(id)node;
-(BOOL)isGroup;
-(void)setSelected:(BOOL)arg1 ;
-(void)unselect;
-(void)dealloc;
-(void)set_node:(DOMHTMLOptGroupElement *)arg1 ;
-(id)initWithHTMLOptGroupNode:(id)arg1 ;
-(BOOL)selected;
@end
