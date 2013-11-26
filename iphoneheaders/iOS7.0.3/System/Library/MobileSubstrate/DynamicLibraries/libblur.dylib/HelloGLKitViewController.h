/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/MobileSubstrate/DynamicLibraries/libblur.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libblur.dylib/libblur.dylib-Structs.h>
#import <GLKit/GLKViewController.h>

@class EAGLContext, GLKBaseEffect;

@interface HelloGLKitViewController : GLKViewController {

	float _curRed;
	BOOL _increasing;
	EAGLContext* _context;
	unsigned _vertexBuffer;
	unsigned _indexBuffer;
	GLKBaseEffect* _effect;
	GLKBaseEffect* _effect2;
	float _rotation;
	unsigned _vertexArray;
	float _lightRotation;
	float firstXlocation;
	float firstYlocation;
	float differenceY;
	float differenceX;

}
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)update;
-(void)cleanup;
-(void)setupGL;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
@end
