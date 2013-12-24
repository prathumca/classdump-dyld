/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLProperty.h>

@class NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {

	NSSQLEntity* _destinationEntity;
	NSSQLRelationship* _inverse;

}
-(id)destinationEntity;
-(id)correlationTableName;
-(id)foreignKey;
-(id)inverseRelationship;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)relationshipDescription;
-(id)sourceEntity;
-(void)_setInverseRelationship:(id)arg1 ;
-(id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setForeignOrderKey:(id)arg1 ;
-(void)dealloc;
-(BOOL)isOrdered;
@end
