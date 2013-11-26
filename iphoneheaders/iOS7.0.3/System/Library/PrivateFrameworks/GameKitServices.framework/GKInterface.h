/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSNumber, NSString;

@interface GKInterface : NSObject {

	NSNumber* _index;
	NSString* _bsdName;
	NSString* _type;
	unsigned _priority;

}

@property (nonatomic,retain) NSNumber * index;               //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) NSString * bsdName;               //@synthesize bsdName=_bsdName - In the implementation block
@property (nonatomic,copy) NSString * type;                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned priority;              //@synthesize priority=_priority - In the implementation block
+(id)bsdNameForIndex:(id)arg1 ;
+(id)interfaceWithInterfaceIndex:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)index;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(void)setIndex:(id)arg1 ;
-(id)bsdName;
-(void)setBsdName:(id)arg1 ;
@end
