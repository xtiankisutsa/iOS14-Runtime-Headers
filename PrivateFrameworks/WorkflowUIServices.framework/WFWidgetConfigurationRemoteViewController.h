/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUIServices/WorkflowUIServices-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/WFWidgetConfigurationServiceHostProtocol.h>

@protocol WFWidgetConfigurationRemoteViewControllerDelegate;
@interface WFWidgetConfigurationRemoteViewController : _UIRemoteViewController <WFWidgetConfigurationServiceHostProtocol> {

	id<WFWidgetConfigurationRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFWidgetConfigurationRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)setDelegate:(id<WFWidgetConfigurationRemoteViewControllerDelegate>)arg1 ;
-(id<WFWidgetConfigurationRemoteViewControllerDelegate>)delegate;
-(void)setConfigurationCardViewFrame:(CGRect)arg1 ;
-(void)intentWasConfigured:(id)arg1 ;
-(void)requestViewControllerDismissal;
@end

