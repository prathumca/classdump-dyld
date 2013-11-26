/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPointerArray.h>

@interface NSConcretePointerArray : NSPointerArray {

	NSSlice* slice;
	unsigned count;
	unsigned capacity;
	unsigned options;
	unsigned mutations;
	BOOL needsCompaction;

}
-(id)initWithPointerFunctions:(id)arg1 ;
-(id)pointerFunctions;
-(void*)pointerAtIndex:(unsigned)arg1 ;
-(void)addPointer:(void*)arg1 ;
-(void)removePointerAtIndex:(unsigned)arg1 ;
-(void)insertPointer:(void*)arg1 atIndex:(unsigned)arg2 ;
-(void)replacePointerAtIndex:(unsigned)arg1 withPointer:(void*)arg2 ;
-(void)_initBlock;
-(void)arrayGrow:(unsigned)arg1 ;
-(void)_markNeedsCompaction;
-(unsigned)indexOfPointer:(void*)arg1 ;
-(void)removePointer:(void*)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(Class)classForCoder;
-(void)setCount:(unsigned)arg1 ;
-(id)initWithOptions:(unsigned)arg1 ;
-(void)finalize;
-(void)compact;
@end
