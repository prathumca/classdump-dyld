/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSDirectoryEnumerator.h>

@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {

	CFURLEnumeratorRef _enumerator;
	/*^block*/ id _errorHandler;
	BOOL shouldContinue;

}

@property (copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
-(id)directoryAttributes;
-(void)skipDescendents;
-(id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned)arg3 errorHandler:(/*^block*/ id)arg4 ;
-(/*^block*/ id)errorHandler;
-(void)dealloc;
-(id)nextObject;
-(unsigned)level;
-(void)setErrorHandler:(/*^block*/ id)arg1 ;
-(id)fileAttributes;
-(void)skipDescendants;
-(void)finalize;
@end
