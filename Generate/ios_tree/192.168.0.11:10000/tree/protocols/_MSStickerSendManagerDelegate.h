/* Generated by RuntimeBrowser.
 */

@protocol _MSStickerSendManagerDelegate <NSObject>

@required

- (void)insertSticker:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <MSStickerPrivate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startDragSticker:(void *)arg1 frameInRemoteView:(void *)arg2 fence:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: <MSStickerPrivate> *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, BKSAnimationFenceHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)stickerDragCanceled;
- (void)stickerDragMoved:(void *)arg1 frameInRemoteView:(void *)arg2 rotation:(void *)arg3 scale:(void *)arg4 fence:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: <MSStickerPrivate> *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, double, double, BKSAnimationFenceHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
