//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICDrawingUndoCheckPoint, NSArray, NSString;

@interface ICDrawingUndoCommand : NSObject
{
    BOOL _hide;
    NSArray *_commands;
    NSString *_actionName;
    ICDrawingUndoCheckPoint *_checkPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICDrawingUndoCheckPoint *checkPoint; // @synthesize checkPoint=_checkPoint;
@property(nonatomic) BOOL hide; // @synthesize hide=_hide;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) NSArray *commands; // @synthesize commands=_commands;
- (id)undoCommandHidden:(BOOL)arg1;
- (double)renderCost;
@property(readonly, nonatomic) NSArray *visibleCommands;

@end

