//
//  RWTDetailViewController.h
//  ScaryBugs
//
//  Created by Jorge Jordán Arenas on 04/02/14.
//
//

#import <UIKit/UIKit.h>

@interface RWTDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
