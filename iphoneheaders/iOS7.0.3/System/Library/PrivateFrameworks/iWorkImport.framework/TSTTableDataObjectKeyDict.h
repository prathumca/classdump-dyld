/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSTTableDataObjectKeyDict : NSObject {

	hash_map<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int, TSTTableDataObjectHasher, TSTTableDataObjectEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int> > >* mMap;

}
-(void)setKey:(unsigned)arg1 forObject:(id)arg2 ;
-(unsigned)keyForObject:(id)arg1 ;
-(void)removeKeyForObject:(id)arg1 ;
-(void)removeAllKeys;
-(void)dealloc;
-(unsigned)count;
-(id)init;
@end
