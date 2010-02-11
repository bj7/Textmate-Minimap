//
//  TextmateMinimap.h
//  TextmateMinimap
//
//  Created by Julian Eberius on 09.02.10.
//  Copyright 2010 Julian Eberius. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@protocol TMPlugInController
- (float)version;
@end

@interface TextmateMinimap : NSObject {
	NSLock*	theLock;
	NSTimer* timer;
	NSMenu* windowMenu;
	NSMenuItem* showMinimapMenuItem;
}

@property(retain) NSTimer* timer;
@property(retain, readonly) NSLock*	theLock;

+ (TextmateMinimap*)instance;
- (id)initWithPlugInController:(id <TMPlugInController>)aController;
- (void)toggleMinimap:(id)sender;
- (void)setMinimapMenuItem:(BOOL)flag;
- (void)installMenuItem;
- (void)uninstallMenuItem;
- (void)dealloc;

@end