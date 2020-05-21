//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConsoleKit/CSKDetailsViewController.h>

@class CSKMessage, CSKTextViewController, NSFont;

@interface CSKSQLMessageDetailsViewController : CSKDetailsViewController
{
    CSKMessage *_message;
    NSFont *_defaultFont;
    CSKTextViewController *_textViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSKTextViewController *textViewController; // @synthesize textViewController=_textViewController;
@property(retain, nonatomic) NSFont *defaultFont; // @synthesize defaultFont=_defaultFont;
@property(retain, nonatomic) CSKMessage *message; // @synthesize message=_message;
- (id)tabViewController:(id)arg1 viewForTabItemAtIndex:(unsigned long long)arg2;
- (void)_updateMessageDetailsWithCurrentMessage;
- (void)_updateTextViewFont:(id)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;

@end

