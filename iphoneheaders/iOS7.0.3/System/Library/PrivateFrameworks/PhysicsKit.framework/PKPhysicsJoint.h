/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <CoreFoundation/NSCoding.h>

@class PKPhysicsBody;

@interface PKPhysicsJoint : NSObject <NSCoding> {

	BOOL _inUse;
	PKPhysicsBody* _bodyA;
	PKPhysicsBody* _bodyB;

}

@property (assign,nonatomic) unsigned* _joint : 2Joint; 
@property (nonatomic,readonly) unsigned* _jointDef : 2JointDef; 
@property (nonatomic,retain) PKPhysicsBody * bodyA;                          //@synthesize bodyA=_bodyA - In the implementation block
@property (nonatomic,retain) PKPhysicsBody * bodyB;                          //@synthesize bodyB=_bodyB - In the implementation block
-(BOOL)_inUse;
-(void)setBodyA:(id)arg1 ;
-(void)setBodyB:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)bodyA;
-(id)bodyB;
-(void)create;
-(void)set_inUse:(BOOL)arg1 ;
-(unsigned*)_joint;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(void).cxx_destruct;
@end
