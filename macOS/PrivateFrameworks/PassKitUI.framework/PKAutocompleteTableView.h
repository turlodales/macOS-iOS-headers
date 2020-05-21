//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

@class PKAutocompleteViewController;

@interface PKAutocompleteTableView : NSTableView
{
    long long _selectingRow;
    id <PKAutocompleteTableViewDelegate> _autocompleteDelegate;
    PKAutocompleteViewController *_autocompleteViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak PKAutocompleteViewController *autocompleteViewController; // @synthesize autocompleteViewController=_autocompleteViewController;
@property(nonatomic) __weak id <PKAutocompleteTableViewDelegate> autocompleteDelegate; // @synthesize autocompleteDelegate=_autocompleteDelegate;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (long long)_rowFromMouseEvent:(id)arg1;

@end

