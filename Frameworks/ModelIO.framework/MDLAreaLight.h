/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/MDLPhysicallyPlausibleLight.h>

@interface MDLAreaLight : MDLPhysicallyPlausibleLight {

	float _areaRadius;
	float _aspect;
	 _superEllipticPower;

}

@property (assign,nonatomic) float areaRadius;                 //@synthesize areaRadius=_areaRadius - In the implementation block
@property (assign,nonatomic)  superEllipticPower;              //@synthesize superEllipticPower=_superEllipticPower - In the implementation block
@property (assign,nonatomic) float aspect;                     //@synthesize aspect=_aspect - In the implementation block
-(float)aspect;
-(void)setAspect:(float)arg1 ;
-(id)init;
-(void)setAreaRadius:(float)arg1 ;
-(void)setSuperEllipticPower:;
-(float)areaRadius;
-()superEllipticPower;
@end
