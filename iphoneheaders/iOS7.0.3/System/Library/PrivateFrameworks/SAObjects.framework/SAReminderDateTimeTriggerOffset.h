/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAReminderDateTimeTriggerOffset : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * offsetTimeUnit; 
@property (nonatomic,copy) NSNumber * offsetValue; 
+(id)dateTimeTriggerOffset;
+(id)dateTimeTriggerOffsetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)offsetTimeUnit;
-(void)setOffsetTimeUnit:(id)arg1 ;
-(id)offsetValue;
-(void)setOffsetValue:(id)arg1 ;
@end
