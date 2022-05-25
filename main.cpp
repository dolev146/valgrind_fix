

#include <string>
#include <stdexcept>
#include <iostream>
#include <vector>
#include "OrgChart.hpp"
using namespace std;
using namespace ariel;




 int main()
 {

     OrgChart chart2;
     chart2.add_root("Owner");
     chart2.add_root("New_Owner");
     // CHECK_THROWS(chart2.add_sub("Owner", "General Manager"));        // Owner was replaced
     // CHECK_THROWS(chart2.add_sub("Lebron James", "General_Manager")); // no such value
     chart2.add_sub("New_Owner", "General_Manager");
     chart2.add_sub("New_Owner", "Share_Holders");
     chart2.add_sub("New_Owner", "Head_of_operations");
     chart2.add_sub("General_Manager", "Head_Coach");
     chart2.add_sub("General_Manager", "Assistant_Coach");
     chart2.add_sub("Head_of_operations", "Team_Doctor");
     chart2.add_sub("Head_of_operations", "Head_Scout");
     chart2.add_sub("Share_Holders", "Sub_Share_Holder1");
     chart2.add_sub("Share_Holders", "Sub_Share_Holder2");
     // CHECK_THROWS(chart2.add_sub("head_of_operations", "Cheerleader")); // Head not head
     chart2.add_sub("Head_Coach", "Captain");
     chart2.add_sub("Team_Doctor", "Team_Physiotherapist");
     cout << "begin level order " << endl;
     cout << endl;
     // test level order
     vector<string> lvl_order;
     for (auto it = chart2.begin_level_order(); it != chart2.end_level_order(); ++it)
     {
         lvl_order.push_back(*it);
         cout << *it << " ";
     }
     cout << endl;
     cout << endl;
     cout << endl;

     if (lvl_order.at(0).compare("New_Owner"))
     {
         cout << "level order test failed 11111 new Owner" << endl;
     }
     if (lvl_order.at(1).compare("General_Manager"))
     {
         cout << "level order test failed General_Manager" << endl;
     };
     if (lvl_order.at(2).compare("Share_Holders"))
     {
         cout << "level order test failed Share_Holders" << endl;
     };
     if (lvl_order.at(3).compare("Head_of_operations"))
     {
         cout << "level order test failed Head_of_operations" << endl;
     };
     if (lvl_order.at(4).compare("Head_Coach"))
     {
         cout << "level order test failed Head_Coach" << endl;
     };
     if (lvl_order.at(5).compare("Assistant_Coach"))
     {
         cout << "level order test failed Assistant_Coach" << endl;
     };
     if (lvl_order.at(6).compare("Sub_Share_Holder1"))
     {
         cout << "level order test failed Sub_Share_Holder1 " << endl;
     };
     if (lvl_order.at(7).compare("Sub_Share_Holder2"))
     {
         cout << "level order test failed Sub_Share_Holder2" << endl;
     };
     if (lvl_order.at(8).compare("Team_Doctor"))
     {
         cout << "level order test failed Team_Doctor" << endl;
     };
     if (lvl_order.at(9).compare("Head_Scout"))
     {
         cout << "level order test failed Head_Scout" << endl;
     };
     if (lvl_order.at(10).compare("Captain"))
     {
         cout << "level order test failed Captain" << endl;
     };
     if (lvl_order.at(11).compare("Team_Physiotherapist"))
     {
         cout << "level order test failed Team_Physiotherapist" << endl;
     };

     cout << endl;

     lvl_order.clear();

     // // add another field and check that it works
     chart2.add_sub("Assistant_Coach", "Water_Boy");

     cout << "check operator << " << endl;
     cout << chart2 << endl;

     cout << endl;
     cout << endl;
     cout << endl;

     cout << "check default iterator " << endl;
     // check default iterator

     for (auto name : chart2)
     {
         lvl_order.push_back(name);
         cout << name << " ";
     }
     cout << endl;
     cout << endl;
     cout << endl;

     if (lvl_order.at(0).compare("New_Owner"))
     {
         cout << "level order test failed 11111 new Owner" << endl;
     };
     if (lvl_order.at(1).compare("General_Manager"))
     {
         cout << "level order test failed General_Manager" << endl;
     };

     if (lvl_order.at(2).compare("Share_Holders"))
     {
         cout << "level order test failed Share_Holders" << endl;
     };
     if (lvl_order.at(3).compare("Head_of_operations"))
     {
         cout << "level order test failed Head_of_operations" << endl;
     };
     if (lvl_order.at(4).compare("Head_Coach"))
     {
         cout << "level order test failed Head_Coach" << endl;
     };
     if (lvl_order.at(5).compare("Assistant_Coach"))
     {
         cout << "level order test failed Assistant_Coach" << endl;
     };

     if (lvl_order.at(6).compare("Sub_Share_Holder1"))
     {
         cout << "level order test failed Sub_Share_Holder1" << endl;
     };

     if (lvl_order.at(7).compare("Sub_Share_Holder2"))
     {
         cout << "level order test failed Sub_Share_Holder2" << endl;
     };
     if (lvl_order.at(8).compare("Team_Doctor"))
     {
         cout << "level order test failed Team_Doctor" << endl;
     };

     if (lvl_order.at(9).compare("Head_Scout"))
     {
         cout << "level order test failed Head_Scout" << endl;
     };

     if (lvl_order.at(10).compare("Captain"))
     {
         cout << "level order test failed Captain" << endl;
     };

     if (lvl_order.at(11).compare("Water_Boy"))
     {
         cout << " level order test faild Water_boy";
     }

     if (lvl_order.at(12).compare("Team_Physiotherapist"))
     {
         cout << " level order test faild Team_Pthaouraoist";
     }
     cout << endl;

     cout << "test reverse levelr order " << endl;

     // // test reverse level order
     for (auto it = chart2.begin_reverse_order(); it != chart2.reverse_order(); ++it)
     {
         cout << *it << " ";
     }
     cout << endl;
     cout << endl;
     cout << endl;

     cout << " begin preorder " << endl;

     for (auto it = chart2.begin_preorder(); it != chart2.end_preorder(); ++it)
     {
         cout << *it << " ";
     }

     cout << endl;
     cout << endl;
     cout << endl;
 }