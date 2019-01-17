#import "RNNBasePresenter.h"
#import "RNNRootViewCreator.h"
#import "RNNReactComponentRegistry.h"
#import "InteractivePopGestureDelegate.h"

@interface RNNNavigationControllerPresenter : RNNBasePresenter

- (instancetype)initWithcomponentRegistry:(RNNReactComponentRegistry *)componentRegistry;
@property (nonatomic, strong) InteractivePopGestureDelegate *interactivePopGestureDelegate;

- (void)applyOptionsBeforePopping:(RNNNavigationOptions *)options;

- (void)renderComponents:(RNNNavigationOptions *)options perform:(RNNReactViewReadyCompletionBlock)readyBlock;

@end
