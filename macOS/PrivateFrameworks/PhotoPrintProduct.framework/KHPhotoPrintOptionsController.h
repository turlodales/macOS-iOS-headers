//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXViewController.h"

@class NSArray, NSArrayController, NSStepper, NSTextField;

@interface KHPhotoPrintOptionsController : UXViewController
{
    NSArray *_frames;
    NSArrayController *_layoutsController;
    NSTextField *_copiesLabel;
    NSTextField *_copiesField;
    NSStepper *_copiesStepper;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSStepper *copiesStepper; // @synthesize copiesStepper=_copiesStepper;
@property(readonly, nonatomic) NSTextField *copiesField; // @synthesize copiesField=_copiesField;
@property(readonly, nonatomic) NSTextField *copiesLabel; // @synthesize copiesLabel=_copiesLabel;
@property(readonly, nonatomic) NSArrayController *layoutsController; // @synthesize layoutsController=_layoutsController;
@property(retain, nonatomic) NSArray *frames; // @synthesize frames=_frames;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

