/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationAttributes.h>

@interface KNBuildAttributes : KNAnimationAttributes
+(id)supportedCustomAttributes;
+(BOOL)customAttributeKeyIsValid:(id)arg1 ;
+(id)defaultAttributesForEffect:(id)arg1 buildType:(int)arg2 ;
+(id)delayAttributeKeyForTriggerType:(unsigned)arg1 ;
-(void)encodeToArchive:(BuildAttributesArchive*)arg1 ;
-(void)p_readSharedAttributesForArchive:(AnimationAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
-(void)p_readDeprecatedAttributesForArchive:(const BuildAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
-(void)p_readBuildAttributesForArchive:(const BuildAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
-(void)p_writeSharedAttributesToArchive:(BuildAttributesArchive*)arg1 ;
-(void)p_writeBuildAttributesToArchive:(BuildAttributesArchive*)arg1 ;
-(id)initFromBuildAttributesArchive:(const BuildAttributesArchive*)arg1 ;
@end
