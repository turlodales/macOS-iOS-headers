//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKImageView2.h"

@class AKController, NSCursor;

@interface MUImageView : IKImageView2
{
    AKController *_annotationController;
    NSCursor *_annotationCursor;
}

- (void).cxx_destruct;
@property(retain) NSCursor *annotationCursor; // @synthesize annotationCursor=_annotationCursor;
@property __weak AKController *annotationController; // @synthesize annotationController=_annotationController;
- (void)cursorUpdate:(id)arg1;

@end

